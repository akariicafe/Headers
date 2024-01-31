@class NSString, NSDictionary, NSData, NSArray, NSMutableArray;

@interface MSDKManifestComponent : NSObject

@property (retain, nonatomic) NSDictionary *rawDependencyDict;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSMutableArray *mutableDependencies;
@property (readonly, nonatomic) NSData *signature;
@property (readonly, nonatomic) NSString *certificate;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *platformType;
@property (readonly, nonatomic) NSArray *data;
@property (readonly, nonatomic) NSArray *dependencies;

- (void).cxx_destruct;
- (void)addDependency:(id)a0;
- (BOOL)isOfType:(long long)a0;
- (id)_parseDataItem:(id)a0;
- (id)_parseDataItemsForAppComponent:(id)a0;
- (id)_parseFileItems:(id)a0;
- (id)getRawDependency;
- (id)initWithIdentifier:(id)a0 componentType:(long long)a1 andDictionary:(id)a2;

@end
