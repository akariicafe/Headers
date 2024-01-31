@protocol CHContactDataSource;

@interface CHContactProvider : NSObject <CHCallContactProvider>

@property (readonly, nonatomic) id<CHContactDataSource> dataSource;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)contactsByHandleForCalls:(id)a0 keyDescriptors:(id)a1 error:(id *)a2;
- (id)contactsByHandleForHandles:(id)a0 keyDescriptors:(id)a1 error:(id *)a2;

@end
