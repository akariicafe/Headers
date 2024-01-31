@class NSString;

@interface SFEndSearchFeedback : SFFeedback

@property (copy, nonatomic) NSString *uuid;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) unsigned long long cancelSearchEvent;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithStartSearch:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
