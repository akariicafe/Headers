@class CNContactStore, NSString;
@protocol CNLSApplicationWorkspace;

@interface _CNUIUserActionCurator : NSObject <CNUIUserActionCurator>

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) id<CNLSApplicationWorkspace> applicationWorkspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
