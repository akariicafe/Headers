@class GEOPDInlineRapEnablement;

@interface GEOInlineRapEnablement : NSObject {
    GEOPDInlineRapEnablement *_inlineRapEnablement;
}

@property (readonly, nonatomic) BOOL isHoursEditable;
@property (readonly, nonatomic) BOOL isPhoneEditable;
@property (readonly, nonatomic) BOOL isWebsiteEditable;
@property (readonly, nonatomic) BOOL isAddressEditable;
@property (readonly, nonatomic) BOOL isEditable;

- (void).cxx_destruct;
- (id)initWithEnablement:(id)a0;

@end
