@class NSArray;

@interface CAMRealtimeMetadataCommand : CAMCaptureCommand

@property (readonly, copy, nonatomic) NSArray *_desiredTypes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTypes:(id)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_metadataObjectTypesForRealtimeMetadataTypes:(id)a0 withAvailableMetadataTypes:(id)a1;
- (id)_metadataObjectTypeForRealtimeMetadataType:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
