@class NSString;

@interface GDFactObjectString : NSObject <GDFactObject>

@property (readonly, nonatomic) NSString *value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithValue:(id)a0;
- (void).cxx_destruct;

@end
