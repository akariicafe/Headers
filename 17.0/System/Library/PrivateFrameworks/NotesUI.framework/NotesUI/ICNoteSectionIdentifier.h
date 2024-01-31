@class NSDictionary, NSArray, NSString;
@protocol ICItemIdentifier;

@interface ICNoteSectionIdentifier : NSObject <ICSectionIdentifier>

@property (class, readonly, nonatomic) NSDictionary *titles;
@property (class, readonly, copy, nonatomic) NSArray *sortDescriptors;

@property (nonatomic) long long sectionType;
@property (readonly, nonatomic) BOOL containsRelevantIdentifiers;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=isCollapsible) BOOL collapsible;
@property (readonly, copy, nonatomic) NSString *expansionStateContext;
@property (readonly, nonatomic) id<ICItemIdentifier> parentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNoteSectionType:(long long)a0;
- (BOOL)isEqualToICNoteSectionIdentifier:(id)a0;

@end
