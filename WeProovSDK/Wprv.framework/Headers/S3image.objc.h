// Objective-C API for talking to bitbucket.org/weproov/weproovstrucgo/s3image Go package.
//   gobind -lang=objc bitbucket.org/weproov/weproovstrucgo/s3image
//
// File is generated by gobind. Do not edit.

#ifndef __S3image_H__
#define __S3image_H__

@import Foundation;
#include "Universe.objc.h"

#include "Config.objc.h"
#include "Fscache.objc.h"
#include "Wperr.objc.h"

@class S3imageS3PictureDownload;
@protocol S3imageDelegate;
@class S3imageDelegate;
@protocol S3imageThumbDelegate;
@class S3imageThumbDelegate;

@protocol S3imageDelegate <NSObject>
- (void)onProcessImageError:(NSError*)p0;
- (void)onProcessImageSuccess:(BOOL)p0 p1:(NSString*)p1;
@end

@protocol S3imageThumbDelegate <NSObject>
- (void)onProcessImageError:(NSError*)err;
- (void)onProcessImageSuccess:(NSString*)key path:(NSString*)path;
@end

/**
 * 	Represente la reponce de la requette repondue par l'api
 */
@interface S3imageS3PictureDownload : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (NSString*)data;
- (void)setData:(NSString*)v;
- (NSString*)path;
- (void)setPath:(NSString*)v;
/**
 * 	Permet de transformer la valeur de la requete de la base64 en data
 */
- (NSData*)getDatas;
@end

FOUNDATION_EXPORT void S3imageGet(NSString* key, BOOL dropoff, id<S3imageDelegate> delegate);

FOUNDATION_EXPORT NSData* S3imageGetCache(NSString* proovCode, NSString* md5);

/**
 * 	Permet de recupere la valeur d'un fichier par la clee
 */
FOUNDATION_EXPORT NSData* S3imageGetData(NSString* key);

FOUNDATION_EXPORT NSString* S3imageGetPath(NSString* proovCode, NSString* md5);

/**
 * 	Permet de recuperer un clee s3 de type image/PROOVCODE/MD5
 */
FOUNDATION_EXPORT S3imageS3PictureDownload* S3imageGetSync(NSString* key, NSError** error);

/**
 * 	Permet de recuperer une version thumb
 */
FOUNDATION_EXPORT void S3imageGetThumb(NSString* key, id<S3imageThumbDelegate> delegate);

FOUNDATION_EXPORT NSString* S3imageSetCache(NSString* proovCode, NSString* md5, S3imageS3PictureDownload* img);

@class S3imageDelegate;

@class S3imageThumbDelegate;

/**
 * 	Delegate utiliser pour la recuperation asynchrone
	TODO: ajouter le nom des argument
 */
@interface S3imageDelegate : NSObject <goSeqRefInterface, S3imageDelegate> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (void)onProcessImageError:(NSError*)p0;
- (void)onProcessImageSuccess:(BOOL)p0 p1:(NSString*)p1;
@end

@interface S3imageThumbDelegate : NSObject <goSeqRefInterface, S3imageThumbDelegate> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (void)onProcessImageError:(NSError*)err;
- (void)onProcessImageSuccess:(NSString*)key path:(NSString*)path;
@end

#endif
