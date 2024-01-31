@class NSString;

@interface SMAssetBundle : NSObject {
    void /* unknown type, empty encoding */ assetBundle;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *workoutIdentifier;
@property (nonatomic, readonly) NSString *downloadingDeviceIdentifier;
@property (nonatomic, readonly) long long loadStatus;
@property (nonatomic, readonly) long long reason;

- (id)init;
- (void).cxx_destruct;

@end
