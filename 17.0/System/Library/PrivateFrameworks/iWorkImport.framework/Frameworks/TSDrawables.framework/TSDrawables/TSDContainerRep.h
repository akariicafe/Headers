@class NSString, NSObject;
@protocol TSDContainerInfo, TSDMutableContainerInfo;

@interface TSDContainerRep : TSDRep <TSDMutableContainerRep>

@property (readonly, nonatomic) NSObject<TSDMutableContainerInfo> *mutableContainerInfo;
@property (readonly, nonatomic) NSObject<TSDContainerInfo> *containerInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLayout:(id)a0 canvasView:(id)a1;

@end
