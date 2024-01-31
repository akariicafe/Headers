@class NSString;

@interface OS_tcc_identity : OS_tcc_object <OS_tcc_identity>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
