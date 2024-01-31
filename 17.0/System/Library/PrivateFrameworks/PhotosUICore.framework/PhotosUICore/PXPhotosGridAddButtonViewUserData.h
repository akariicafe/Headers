@class NSString;

@interface PXPhotosGridAddButtonViewUserData : NSObject <PXGViewUserData>

@property (readonly, nonatomic) long long style;
@property (readonly, copy, nonatomic) id /* block */ actionHandler;
@property (nonatomic) long long preferredUserInterfaceStyle;
@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStyle:(long long)a0 actionHandler:(id /* block */)a1;

@end
