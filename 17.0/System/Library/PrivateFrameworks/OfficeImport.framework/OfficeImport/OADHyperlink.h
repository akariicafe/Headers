@class NSURL, NSString;

@interface OADHyperlink : NSObject {
    NSURL *mTargetLocation;
    int mTargetMode;
    NSString *mTargetFrame;
    NSString *mAction;
    NSString *mTooltip;
    NSString *mInvalidUrl;
}

@property (nonatomic) BOOL doEndSound;
@property (nonatomic) BOOL isVisited;
@property (nonatomic) BOOL doAddToHistory;

- (id)init;
- (unsigned long long)hash;
- (void)setAction:(id)a0;
- (id)action;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setTargetFrame:(id)a0;
- (id)targetFrame;
- (id)tooltip;
- (void)setTargetMode:(int)a0;
- (int)targetMode;
- (void)setTargetLocation:(id)a0;
- (id)targetLocation;
- (void)setTooltip:(id)a0;
- (id)invalidUrl;
- (void)setInvalidUrl:(id)a0;

@end
