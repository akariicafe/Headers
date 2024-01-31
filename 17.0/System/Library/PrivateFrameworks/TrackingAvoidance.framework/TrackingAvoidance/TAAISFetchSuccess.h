@class NSUUID, TAAccessoryInformation, NSString, NSDate;

@interface TAAISFetchSuccess : NSObject <TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) TAAccessoryInformation *info;
@property (readonly, nonatomic) unsigned long long successType;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionDictionary;
- (void).cxx_destruct;
- (id)getDate;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0 withAISInfo:(id)a1 successType:(unsigned long long)a2 date:(id)a3;

@end
