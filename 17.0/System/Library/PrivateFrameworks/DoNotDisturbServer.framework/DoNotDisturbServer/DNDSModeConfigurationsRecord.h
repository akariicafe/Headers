@class NSArray, NSString, NSMutableDictionary;

@interface DNDSModeConfigurationsRecord : NSObject <NSCopying, NSMutableCopying, DNDSPartitionedBackingStoreRecord> {
    NSMutableDictionary *_modeConfigurationsByModeIdentifier;
}

@property (readonly, copy, nonatomic) NSArray *modeConfigurations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;
+ (id)backingStoreWithFileURL:(id)a0 secureFileURL:(id)a1;
+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;
+ (id)newWithDictionaryRepresentation:(id)a0 partitionedDictionaryRepresentation:(id)a1 context:(id)a2;

- (id)init;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)_initWithModeConfigurations:(id)a0;
- (id)_initWithRecord:(id)a0;
- (id)modeConfigurationForModeIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)configurationForModeIdentifier:(id)a0;
- (id)triggersForModeIdentifier:(id)a0;
- (void)log:(id)a0 withMessage:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)modeForModeIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
