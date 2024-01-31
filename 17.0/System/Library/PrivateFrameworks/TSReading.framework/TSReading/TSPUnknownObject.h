@class NSString, NSObject;
@protocol OS_dispatch_data;

@interface TSPUnknownObject : TSPObject {
    NSString *_packageLocator;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *serializedData;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)packageLocator;
- (void)willModify;
- (void)willModifyForUpgrade;

@end
