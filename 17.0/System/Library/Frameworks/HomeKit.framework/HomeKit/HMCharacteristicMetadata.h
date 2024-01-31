@class NSString, NSArray, NSUUID, NSNumber;

@interface HMCharacteristicMetadata : NSObject <NSSecureCoding, HMObjectMerge, NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *minimumValue;
@property (retain, nonatomic) NSNumber *maximumValue;
@property (retain, nonatomic) NSNumber *stepValue;
@property (retain, nonatomic) NSNumber *maxLength;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSString *units;
@property (copy, nonatomic) NSString *manufacturerDescription;
@property (copy, nonatomic) NSArray *validValues;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)mergeFromNewObject:(id)a0;

@end
