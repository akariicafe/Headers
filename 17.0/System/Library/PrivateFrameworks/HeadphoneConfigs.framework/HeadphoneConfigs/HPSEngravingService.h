@class NSString, BTSDevice;

@interface HPSEngravingService : NSObject {
    BTSDevice *_device;
    NSString *_engravingData;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (id)getEngravedCaseView;
- (BOOL)isEngravingSupported;

@end
