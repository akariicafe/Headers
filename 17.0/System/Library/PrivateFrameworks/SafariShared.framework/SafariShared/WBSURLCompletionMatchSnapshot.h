@class NSURL, NSString, NSDate;

@interface WBSURLCompletionMatchSnapshot : NSObject <NSSecureCoding, _SSURLCompletionMatch>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *userVisibleURLString;
@property (readonly, nonatomic) long long matchLocation;
@property (readonly, nonatomic, getter=isTopHit) BOOL topHit;
@property (readonly, nonatomic, getter=isSynthesizedTopHit) BOOL synthesizedTopHit;
@property (readonly, nonatomic, getter=isTopHitDueToTriggerMatch) BOOL topHitDueToTriggerMatch;
@property (readonly, nonatomic) long long visitCount;
@property (readonly, nonatomic) NSDate *lastVisitTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 title:(id)a1 matchLocation:(long long)a2 isTopHit:(BOOL)a3 isSynthesizedTopHit:(BOOL)a4 isTopHitDueToTriggerMatch:(BOOL)a5 visitCount:(long long)a6 lastVisitTime:(id)a7;

@end
