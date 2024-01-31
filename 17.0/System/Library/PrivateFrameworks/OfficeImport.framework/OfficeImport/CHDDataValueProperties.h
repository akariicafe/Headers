@class NSString, OADGraphicProperties, CHDDataLabel, CHDMarker;

@interface CHDDataValueProperties : NSObject <EDKeyedObject> {
    CHDDataLabel *mDataLabel;
    CHDMarker *mMarker;
    unsigned long long mDataValueIndex;
    OADGraphicProperties *mGraphicProperties;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataValueProperties;

- (id)init;
- (long long)key;
- (void).cxx_destruct;
- (id)marker;
- (void)setMarker:(id)a0;
- (id)dataLabel;
- (unsigned long long)dataValueIndex;
- (id)graphicProperties;
- (void)setDataLabel:(id)a0;
- (void)setDataValueIndex:(unsigned long long)a0;
- (void)setGraphicProperties:(id)a0;
- (id)shallowCopyWithIndex:(unsigned long long)a0;

@end
