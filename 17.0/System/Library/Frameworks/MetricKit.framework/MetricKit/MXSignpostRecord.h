@class NSString, NSMeasurement, NSDate;

@interface MXSignpostRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *subsystem;
@property (copy) NSString *category;
@property (copy) NSString *name;
@property (copy) NSDate *beginTimeStamp;
@property (copy) NSDate *endTimeStamp;
@property (copy) NSMeasurement *duration;
@property BOOL isInterval;

- (id)JSONRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithSubSystem:(id)a0 category:(id)a1 name:(id)a2 beginTimeStamp:(id)a3 endTimeStamp:(id)a4 duration:(id)a5 isInterval:(BOOL)a6;

@end
