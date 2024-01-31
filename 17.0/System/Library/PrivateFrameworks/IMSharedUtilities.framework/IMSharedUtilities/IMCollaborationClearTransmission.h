@class NSString, NSDate;

@interface IMCollaborationClearTransmission : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *collaborationId;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *guidString;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCollaborationId:(id)a0 date:(id)a1 guidString:(id)a2;

@end
