@class NSString;

@interface FBSSetting : NSObject <FBSSetting> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _volatile;
    BOOL _local;
    BOOL _isBSSettings;
    NSString *_name;
    unsigned long long _setting;
    Class _extension;
    NSString *_extensionID;
    Class _expectedClass;
    long long _specialCollection;
    id _undefinedValue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)matchesProperty:(SEL)a0;
- (BOOL)matchesPropertyName:(id)a0;

@end
