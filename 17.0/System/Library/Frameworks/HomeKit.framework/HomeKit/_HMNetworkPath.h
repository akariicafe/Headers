@class NSString, NSObject;
@protocol OS_nw_path;

@interface _HMNetworkPath : NSObject <_HMNetworkPath>

@property (retain, nonatomic) NSObject<OS_nw_path> *nwPath;
@property (readonly, nonatomic) int status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithNwPath:(id)a0;

@end
