@class NSString, NSUUID, NSArray, BMStreamSyncPolicy, BMStoreConfig, BMStreamInternalMetadata;

@interface BMStreamConfiguration : NSObject

@property (readonly, nonatomic) NSString *streamIdentifier;
@property (readonly, nonatomic) NSUUID *streamUUID;
@property (readonly, nonatomic) Class eventClass;
@property (readonly, nonatomic) BMStoreConfig *storeConfig;
@property (readonly, nonatomic) NSArray *legacyNames;
@property (readonly, nonatomic) BMStreamSyncPolicy *syncPolicy;
@property (readonly, nonatomic) BMStreamInternalMetadata *internalMetadata;

- (id)init;
- (id)initWithStreamIdentifier:(id)a0 eventClass:(Class)a1 storeConfig:(id)a2 syncPolicy:(id)a3 alternativeNames:(id)a4 internalMetadata:(id)a5;
- (id)initWithStreamIdentifier:(id)a0 eventClass:(Class)a1 storeConfig:(id)a2;
- (id)initWithStreamIdentifier:(id)a0 eventClass:(Class)a1 storeConfig:(id)a2 syncPolicy:(id)a3 alternativeNames:(id)a4;
- (id)initWithStreamUUID:(id)a0 streamIdentifier:(id)a1 eventClass:(Class)a2 storeConfig:(id)a3 syncPolicy:(id)a4 legacyNames:(id)a5 internalMetadata:(id)a6;
- (void).cxx_destruct;

@end
