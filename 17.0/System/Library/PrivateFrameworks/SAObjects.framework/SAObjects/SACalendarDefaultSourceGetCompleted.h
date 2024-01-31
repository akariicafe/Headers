@class SACalendarSource, NSString;

@interface SACalendarDefaultSourceGetCompleted : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SACalendarSource *aceCalendarSource;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultSourceGetCompleted;
+ (id)defaultSourceGetCompletedWithAceCalendarSource:(id)a0;
+ (id)defaultSourceGetCompletedWithDictionary:(id)a0 context:(id)a1;

@end
