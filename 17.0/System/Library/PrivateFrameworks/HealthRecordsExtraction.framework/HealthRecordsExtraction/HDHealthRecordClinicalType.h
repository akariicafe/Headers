@class NSString;

@interface HDHealthRecordClinicalType : NSObject <NSCopying>

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) Class medicalRecordClass;

+ (void)enumerateClinicalTypesUsingBlock:(id /* block */)a0;
+ (id)nameForClinicalType:(long long)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithClinicalType:(long long)a0;
- (id)initWithClinicalTypeName:(id)a0;

@end
