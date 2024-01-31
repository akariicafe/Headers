@class NSString, SMArtwork, NSAttributedString, NSNumber;

@interface SMCatalogLockup : NSObject {
    void /* unknown type, empty encoding */ catalogLockup;
    void /* unknown type, empty encoding */ mediaTagStringBuilder;
}

@property (nonatomic, readonly) NSAttributedString *title;
@property (nonatomic, readonly) NSAttributedString *subtitle;
@property (nonatomic, readonly) NSAttributedString *detail;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) SMArtwork *artwork;
@property (nonatomic, readonly) NSNumber *mediaTypeRawValue;
@property (nonatomic, readonly) long long assetLoadStatus;
@property (nonatomic, readonly) long long bundleReason;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *recencyTag;

- (id)init;
- (void).cxx_destruct;

@end
