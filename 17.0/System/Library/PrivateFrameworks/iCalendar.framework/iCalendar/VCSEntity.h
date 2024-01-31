@class NSArray, NSString, NSMutableDictionary, NSMutableArray;

@interface VCSEntity : NSObject <VCSDictifiable> {
    NSMutableArray *_children;
    NSMutableDictionary *_propertyMap;
}

@property (readonly, nonatomic) unsigned long long entityType;
@property (weak, nonatomic) VCSEntity *parent;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) NSArray *properties;
@property (readonly, nonatomic) NSArray *alarms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForType:(unsigned long long)a0;

- (id)init;
- (void)removePropertyForName:(id)a0;
- (void)setProperty:(id)a0;
- (void).cxx_destruct;
- (id)propertyForName:(id)a0;
- (BOOL)hasPropertyWithName:(id)a0;
- (void)addChildEntity:(id)a0;
- (id)dictify;
- (BOOL)isValidStatus:(unsigned long long)a0;

@end
