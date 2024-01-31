@interface _IMBSBrand : IMBrand

- (id)_init;
- (id)name;
- (BOOL)isVerified;
- (id)localizedResponseTime;
- (id)primaryPhoneNumber;
- (id)_initWithBSBrand:(id)a0;
- (id)brandURI;
- (void)squareLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;
- (void)wideLogoDataForDesiredSize:(struct CGSize { double x0; double x1; })a0 completion:(id /* block */)a1;

@end
