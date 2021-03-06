// Objective-C API for talking to bitbucket.org/weproov/weproovstrucgo/updater Go package.
//   gobind -lang=objc bitbucket.org/weproov/weproovstrucgo/updater
//
// File is generated by gobind. Do not edit.

#ifndef __Update_H__
#define __Update_H__

@import Foundation;
#include "Universe.objc.h"

#include "Config.objc.h"

@class UpdateIosResults;
@class UpdateIosStoreInfos;
@class UpdateVersion;
@protocol UpdateDelegate;
@class UpdateDelegate;

@protocol UpdateDelegate <NSObject>
- (void)onUpdateNeeded:(UpdateVersion*)version;
@end

@interface UpdateIosResults : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (long)resultCount;
- (void)setResultCount:(long)v;
// skipped field IosResults.Results with unsupported type: []bitbucket.org/weproov/weproovstrucgo/updater.IosStoreInfos

@end

@interface UpdateIosStoreInfos : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
// skipped field IosStoreInfos.IpadScreenshotUrls with unsupported type: []string

// skipped field IosStoreInfos.AppletvScreenshotUrls with unsupported type: []string

- (NSString*)artworkUrl60;
- (void)setArtworkUrl60:(NSString*)v;
- (NSString*)artworkUrl512;
- (void)setArtworkUrl512:(NSString*)v;
- (NSString*)artworkUrl100;
- (void)setArtworkUrl100:(NSString*)v;
- (NSString*)artistViewUrl;
- (void)setArtistViewUrl:(NSString*)v;
- (BOOL)isGameCenterEnabled;
- (void)setIsGameCenterEnabled:(BOOL)v;
- (NSString*)kind;
- (void)setKind:(NSString*)v;
// skipped field IosStoreInfos.Features with unsupported type: []string

// skipped field IosStoreInfos.SupportedDevices with unsupported type: []string

// skipped field IosStoreInfos.ScreenshotUrls with unsupported type: []string

// skipped field IosStoreInfos.Advisories with unsupported type: []string

- (NSString*)trackViewUrl;
- (void)setTrackViewUrl:(NSString*)v;
- (NSString*)trackCensoredName;
- (void)setTrackCensoredName:(NSString*)v;
// skipped field IosStoreInfos.LanguageCodesISO2A with unsupported type: []string

- (NSString*)fileSizeBytes;
- (void)setFileSizeBytes:(NSString*)v;
- (NSString*)sellerUrl;
- (void)setSellerUrl:(NSString*)v;
- (NSString*)contentAdvisoryRating;
- (void)setContentAdvisoryRating:(NSString*)v;
- (NSString*)trackContentRating;
- (void)setTrackContentRating:(NSString*)v;
// skipped field IosStoreInfos.GenreIds with unsupported type: []string

- (NSString*)currentVersionReleaseDate;
- (void)setCurrentVersionReleaseDate:(NSString*)v;
- (NSString*)releaseNotes;
- (void)setReleaseNotes:(NSString*)v;
- (NSString*)currency;
- (void)setCurrency:(NSString*)v;
- (NSString*)wrapperType;
- (void)setWrapperType:(NSString*)v;
- (NSString*)version;
- (void)setVersion:(NSString*)v;
- (NSString*)description;
- (void)setDescription:(NSString*)v;
- (long)artistId;
- (void)setArtistId:(long)v;
- (NSString*)artistName;
- (void)setArtistName:(NSString*)v;
// skipped field IosStoreInfos.Genres with unsupported type: []string

- (double)price;
- (void)setPrice:(double)v;
- (long)trackId;
- (void)setTrackId:(long)v;
- (NSString*)trackName;
- (void)setTrackName:(NSString*)v;
- (NSString*)bundleId;
- (void)setBundleId:(NSString*)v;
// skipped field IosStoreInfos.ReleaseDate with unsupported type: time.Time

- (BOOL)isVppDeviceBasedLicensingEnabled;
- (void)setIsVppDeviceBasedLicensingEnabled:(BOOL)v;
- (NSString*)primaryGenreName;
- (void)setPrimaryGenreName:(NSString*)v;
- (NSString*)formattedPrice;
- (void)setFormattedPrice:(NSString*)v;
- (long)primaryGenreId;
- (void)setPrimaryGenreId:(long)v;
- (NSString*)sellerName;
- (void)setSellerName:(NSString*)v;
- (NSString*)minimumOsVersion;
- (void)setMinimumOsVersion:(NSString*)v;
@end

@interface UpdateVersion : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (long)major;
- (void)setMajor:(long)v;
- (long)minor;
- (void)setMinor:(long)v;
- (long)build;
- (void)setBuild:(long)v;
- (NSString*)releaseNotes;
- (void)setReleaseNotes:(NSString*)v;
// skipped method Version.Equal with unsupported parameter or return types

// skipped method Version.NeedUpdate with unsupported parameter or return types

- (void)print;
@end

FOUNDATION_EXPORT void UpdateCheckAndroid(NSString* bundleId, NSString* version, id<UpdateDelegate> delegate);

FOUNDATION_EXPORT void UpdateCheckIos(NSString* bundleId, NSString* version, id<UpdateDelegate> delegate);

FOUNDATION_EXPORT UpdateVersion* UpdateGetVersionIos(NSString* bundleId);

@class UpdateDelegate;

@interface UpdateDelegate : NSObject <goSeqRefInterface, UpdateDelegate> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (void)onUpdateNeeded:(UpdateVersion*)version;
@end

#endif
