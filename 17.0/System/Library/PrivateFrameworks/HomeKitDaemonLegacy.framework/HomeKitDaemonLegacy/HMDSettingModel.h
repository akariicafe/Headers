@class NSString, NSUUID, NSData, NSNumber;

@interface HMDSettingModel : HMBModel <HMDSettingModelProtocol>

@property (copy, nonatomic) NSNumber *type;
@property (copy, nonatomic) NSNumber *properties;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *numberValue;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSData *dataValue;
@property (copy, nonatomic) NSUUID *selectionIdentifier;
@property (copy, nonatomic) NSString *selectionValue;
@property (readonly, nonatomic) NSUUID *hmbModelID;
@property (readonly, nonatomic) NSUUID *hmbParentModelID;
@property (readonly, nonatomic) NSString *nameForKeyPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)hmbProperties;

- (id)copyWithNewParentModelID:(id)a0;
- (BOOL)setSettingValue:(id)a0;

@end
