@class NSString, _BlastDoorLPSpecializationMetadata, _BlastDoorLPImage;

@interface _BlastDoorLPSharedObjectMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *information;
@property (retain, nonatomic) _BlastDoorLPImage *icon;
@property (nonatomic) BOOL isCollaboration;
@property (retain, nonatomic) _BlastDoorLPSpecializationMetadata *specialization;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;

@end
