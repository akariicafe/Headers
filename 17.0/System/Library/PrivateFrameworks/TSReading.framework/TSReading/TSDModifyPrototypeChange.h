@class NSString, TSSPropertyMap, TSSMutablePropertySet, TSDPropertySourceForModifyPrototypeChange;
@protocol TSSPropertySource;

@interface TSDModifyPrototypeChange : NSObject <TSDPrototypeChange> {
    TSDPropertySourceForModifyPrototypeChange *mPropertySourceBeforeChange;
    TSDPropertySourceForModifyPrototypeChange *mPropertySourceAfterChange;
}

@property (readonly, retain) TSSMutablePropertySet *changedPropertySet;
@property (readonly, retain) TSSPropertyMap *changedPropertyMapBeforeChange;
@property (readonly, retain) TSSPropertyMap *changedPropertyMapAfterChange;
@property (readonly, retain) TSSMutablePropertySet *i_propertiesWithOldValuesRecordedButNotNewValues;
@property (readonly) BOOL prototypeIsBeingReplaced;
@property (readonly) BOOL prototypeIsBeingModified;
@property (readonly) BOOL prototypeIsBeingDeleted;
@property (readonly, retain) id prototype;
@property (readonly, retain) id replacement;
@property (readonly, retain) id<TSSPropertySource> propertiesBeforeChange;
@property (readonly, retain) id<TSSPropertySource> propertiesAfterChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initModifyPrototypeChangeForPrototype:(id)a0;
- (BOOL)propertiesAreChanging:(id)a0;
- (BOOL)propertyIsChanging:(int)a0;

@end
