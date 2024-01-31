@class NSString;

@interface NTKTopLevelSectionInfo : NSObject <NTKComplicationSectionInfo, NSCopying>

@property (copy, nonatomic) NSString *ntk_identifier;
@property (copy, nonatomic) NSString *ntk_localizedSectionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 localizedSectionName:(id)a1;

@end
