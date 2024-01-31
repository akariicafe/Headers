@class NSString;

@interface GDSourceListenerConfigIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *view;
@property (readonly, nonatomic) NSString *sourceType;
@property (readonly, nonatomic) int index;
@property (readonly, nonatomic) NSString *schedule;
@property (readonly, nonatomic) NSString *sourceIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithView:(id)a0 sourceType:(id)a1 index:(int)a2 schedule:(id)a3 sourceIdentifier:(id)a4;

@end
