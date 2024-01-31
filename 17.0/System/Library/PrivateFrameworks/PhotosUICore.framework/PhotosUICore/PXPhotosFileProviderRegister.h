@class NSString;

@interface PXPhotosFileProviderRegister : NSObject {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ fileProviderManager;
    void /* unknown type, empty encoding */ domain;
}

@property (class, nonatomic, readonly) NSString *urlQueryItemUUIDKey;
@property (class, nonatomic, readonly) NSString *urlQueryItemLibraryIdentifierKey;
@property (class, nonatomic, readonly) NSString *urlQueryItemItemTypeKey;
@property (class, nonatomic, readonly) NSString *urlQueryItemClientEncodingPolicyKey;
@property (class, nonatomic, readonly) NSString *urlQueryItemDownscalingTargetDimensionKey;
@property (class, nonatomic, readonly) NSString *urlQueryItemIncludeLocationKey;
@property (class, nonatomic, readonly) NSString *urlQueryItemIncludeCaptionKey;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 fileProviderManager:(id)a1 domain:(id)a2;
- (id)registerFileRepresentationsWithItemProvider:(id)a0 asset:(id)a1;

@end
