@class NSArray, WFiCloudDriveAccessResource;

@interface WFStorageServicePickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (retain, nonatomic) WFiCloudDriveAccessResource *iCloudDriveAccessResource;

+ (id)referencedActionResourceClasses;

- (id)possibleStates;
- (BOOL)isHidden;
- (void).cxx_destruct;
- (id)accessoryImageForPossibleState:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (id)defaultSupportedVariableTypes;
- (void)setActionResources:(id)a0;

@end
