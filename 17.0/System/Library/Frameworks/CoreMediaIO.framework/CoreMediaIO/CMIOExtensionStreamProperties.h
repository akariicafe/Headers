@class NSMutableDictionary, NSDictionary, NSNumber, CMIOExtensionClient;

@interface CMIOExtensionStreamProperties : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_propertiesDictionary;
    CMIOExtensionClient *_client;
}

@property (retain) NSNumber *activeFormatIndex;
@property (retain) NSDictionary *frameDuration;
@property (retain) NSDictionary *maxFrameDuration;
@property (retain) NSNumber *sinkBufferQueueSize;
@property (retain) NSNumber *sinkBuffersRequiredForStartup;
@property (retain) NSNumber *sinkBufferUnderrunCount;
@property (retain) NSNumber *sinkEndOfData;
@property (copy) NSDictionary *propertiesDictionary;

+ (id)streamPropertiesWithDictionary:(id)a0;

- (void)dealloc;
- (id)client;
- (id)initWithDictionary:(id)a0;
- (id)initWithPropertyValues:(id)a0 client:(id)a1;
- (void)setPropertyState:(id)a0 forProperty:(id)a1;

@end
