@class NSString, EMRepository;

@interface EMRepositoryObject : EMObject <EMRepositoryObject>

@property (retain, nonatomic) EMRepository *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
