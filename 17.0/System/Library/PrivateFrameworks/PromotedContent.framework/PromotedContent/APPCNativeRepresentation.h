@class NSString;

@interface APPCNativeRepresentation : APPCContentRepresentation {
    void /* unknown type, empty encoding */ articleID;
    void /* unknown type, empty encoding */ articleTitle;
    void /* unknown type, empty encoding */ advertiserName;
    void /* unknown type, empty encoding */ campaignData;
}

@property (nonatomic, readonly) NSString *articleID;
@property (nonatomic, readonly) NSString *articleTitle;
@property (nonatomic, readonly) NSString *advertiserName;
@property (nonatomic, readonly) NSString *campaignData;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 adType:(long long)a1 desiredPosition:(long long)a2 privacyMarkerPosition:(long long)a3 articleID:(id)a4 articleTitle:(id)a5 adSponsor:(id)a6 campaignData:(id)a7 adSize:(struct CGSize { double x0; double x1; })a8 adPolicyData:(id)a9;

@end
