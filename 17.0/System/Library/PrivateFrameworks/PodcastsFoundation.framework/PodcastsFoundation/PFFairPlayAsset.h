@class NSString;

@interface PFFairPlayAsset : NSObject {
    void /* unknown type, empty encoding */ adamID;
    void /* unknown type, empty encoding */ avAsset;
    void /* unknown type, empty encoding */ keyStore;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL isOfflineAsset;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAdamID:(long long)a0 avAsset:(id)a1;

@end
