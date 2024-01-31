@class SIComponentIdentifier, NSString;

@interface SISchemaTopLevelUnionType : SISchemaInstrumentationMessage <SISchemaProvisional>

@property (class, readonly, nonatomic) int joinability;

@property (readonly, nonatomic) SIComponentIdentifier *componentIdentifier;
@property (readonly, nonatomic) int componentName;
@property (readonly, nonatomic) int clockIsolationLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)getAnyEventType;
- (id)getVersion;
- (id)qualifiedMessageName;
- (id)getTypeId;
- (BOOL)isProvisional;
- (id)getComponentId;
- (id)wrapAsAnyEvent;
- (int)getComponentName;
- (id)getRequestLinkInfo;

@end
