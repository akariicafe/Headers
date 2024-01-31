@class NSDate;

@interface PKCacheScoreItem : NSObject <NSSecureCoding> {
    NSDate *_insertDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasExpired;
- (id)initWithCoder:(id)a0;
- (BOOL)isNewerThan:(id)a0;

@end
