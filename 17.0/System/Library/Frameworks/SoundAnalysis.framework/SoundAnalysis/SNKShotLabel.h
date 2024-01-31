@interface SNKShotLabel : NSObject {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) long long type;

- (id)init;
- (id)initAsNegativeLabel;
- (id)initAsPositiveLabel;

@end
