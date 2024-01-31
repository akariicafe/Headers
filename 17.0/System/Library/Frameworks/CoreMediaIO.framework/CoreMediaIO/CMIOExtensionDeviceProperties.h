@class NSString, NSDictionary, NSMutableDictionary, NSNumber;

@interface CMIOExtensionDeviceProperties : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_propertiesDictionary;
}

@property (retain) NSString *model;
@property (retain) NSNumber *suspended;
@property (retain) NSNumber *transportType;
@property (retain) NSString *linkedCoreAudioDeviceUID;
@property (copy) NSDictionary *propertiesDictionary;

+ (id)devicePropertiesWithDictionary:(id)a0;

- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (id)initWithPropertyValues:(id)a0;
- (void)setPropertyState:(id)a0 forProperty:(id)a1;

@end
