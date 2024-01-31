@class NSUUID, NSString, NSData, NSNumber;

@interface HMDSettingConstraint : NSObject <HMDSettingBaseProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSNumber *numberValue;
@property (readonly) NSData *dataValue;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSNumber *type;
@property (readonly, copy) id value;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSUUID *parentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
