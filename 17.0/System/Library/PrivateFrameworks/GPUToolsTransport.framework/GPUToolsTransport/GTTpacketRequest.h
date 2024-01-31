@class NSString, NSArray;

@interface GTTpacketRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *selector;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) unsigned long long requestID;
@property (retain, nonatomic) NSArray *requests;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
