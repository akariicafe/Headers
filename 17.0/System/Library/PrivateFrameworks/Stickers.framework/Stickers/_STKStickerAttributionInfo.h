@class NSString;

@interface _STKStickerAttributionInfo : NSObject {
    void /* unknown type, empty encoding */ bundleIdentifier;
    void /* unknown type, empty encoding */ name;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ adamID;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAdamID:(id)a0 bundleIdentifier:(id)a1 name:(id)a2;

@end
