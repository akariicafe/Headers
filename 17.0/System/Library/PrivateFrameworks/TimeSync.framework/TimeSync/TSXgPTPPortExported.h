@class NSString, TSXgPTPPort;

@interface TSXgPTPPortExported : NSObject <TSXgPTPPortClientProtocol>

@property (weak, nonatomic) TSXgPTPPort *object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updatedPortProperties:(id)a0;

@end
