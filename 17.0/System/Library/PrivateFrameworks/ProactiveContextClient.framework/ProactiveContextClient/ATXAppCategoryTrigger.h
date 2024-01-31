@class NSString;

@interface ATXAppCategoryTrigger : NSObject <ATXTrigger>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long iTunesCategoryId;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithiTunesCategoryId:(unsigned long long)a0;

@end
