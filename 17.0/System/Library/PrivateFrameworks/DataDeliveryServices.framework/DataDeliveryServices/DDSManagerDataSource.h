@class NSString, NSDate;

@interface DDSManagerDataSource : NSObject <DDSManagerDataSource>

@property (readonly, copy) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDate:(id)a0 forPreferenceKey:(id)a1;
- (id)dateForPreferenceKey:(id)a0;

@end
