@interface TSKBroadcast : NSObject

+ (void)asyncNotificationWithAccessController:(id)a0 changeNotifier:(id)a1 changeGroup:(id)a2;
+ (void)asyncNotificationWithAccessController:(id)a0 changeNotifier:(id)a1 changeKind:(int)a2 details:(id)a3 changeSource:(id)a4;
+ (void)syncNotificationWithAccessController:(id)a0 changeNotifier:(id)a1 changeGroup:(id)a2;
+ (void)syncNotificationWithAccessController:(id)a0 changeNotifier:(id)a1 changeKind:(int)a2 details:(id)a3 changeSource:(id)a4;
+ (void)twoPhaseNotificationWithAccessController:(id)a0 changeNotifier:(id)a1 changeGroup:(id)a2;
+ (void)twoPhaseNotificationWithAccessController:(id)a0 changeNotifier:(id)a1 changeKind:(int)a2 details:(id)a3 changeSource:(id)a4;

@end
