// Generated by Apple Swift version 3.0.2 (swiftlang-800.0.63 clang-800.0.42.1)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreLocation;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;

SWIFT_CLASS("_TtC9QuickChat11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIView;
@class CLLocationManager;
@class UIImagePickerController;
@class User;
@class UITableView;
@class UITableViewCell;
@class UITextField;
@class CLLocation;
@class NSLayoutConstraint;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC9QuickChat6ChatVC")
@interface ChatVC : UIViewController <UIScrollViewDelegate, UITableViewDataSource, UITextFieldDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, CLLocationManagerDelegate, UITableViewDelegate>
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified inputBar;
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified tableView;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified inputTextField;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified bottomConstraint;
@property (nonatomic, readonly, strong) UIView * _Nullable inputAccessoryView;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic, readonly, strong) CLLocationManager * _Nonnull locationManager;
@property (nonatomic, readonly, strong) UIImagePickerController * _Nonnull imagePicker;
@property (nonatomic, readonly) CGFloat barHeight;
@property (nonatomic, strong) User * _Nullable currentUser;
@property (nonatomic) BOOL canSendLocation;
- (void)customization;
- (void)fetchData;
- (void)dismissSelf;
- (BOOL)checkLocationPermission;
- (void)animateExtraButtonsToHide:(BOOL)toHide;
- (IBAction)showMessage:(id _Nonnull)sender;
- (IBAction)selectGallery:(id _Nonnull)sender;
- (IBAction)selectCamera:(id _Nonnull)sender;
- (IBAction)selectLocation:(id _Nonnull)sender;
- (IBAction)showOptions:(id _Nonnull)sender;
- (IBAction)sendMessage:(id _Nonnull)sender;
- (void)showKeyboardWithNotification:(NSNotification * _Nonnull)notification;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (void)tableView:(UITableView * _Nonnull)tableView willDisplayCell:(UITableViewCell * _Nonnull)cell forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (void)imagePickerController:(UIImagePickerController * _Nonnull)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *, id> * _Nonnull)info;
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class RoundedImageView;
@class UILabel;

SWIFT_CLASS("_TtC9QuickChat14ContactsCVCell")
@interface ContactsCVCell : UICollectionViewCell
@property (nonatomic, weak) IBOutlet RoundedImageView * _Null_unspecified profilePic;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified nameLabel;
- (void)awakeFromNib;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9QuickChat19ConversationsTBCell")
@interface ConversationsTBCell : UITableViewCell
@property (nonatomic, weak) IBOutlet RoundedImageView * _Null_unspecified profilePic;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified nameLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified messageLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified timeLabel;
- (void)clearCellData;
- (void)awakeFromNib;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIBarButtonItem;
@class NSNotification;
@class UIStoryboardSegue;

SWIFT_CLASS("_TtC9QuickChat15ConversationsVC")
@interface ConversationsVC : UIViewController <UIScrollViewDelegate, UITableViewDataSource, UITableViewDelegate>
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified tableView;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified alertBottomConstraint;
@property (nonatomic, strong) UIBarButtonItem * _Nonnull leftButton;
@property (nonatomic, strong) User * _Nullable selectedUser;
- (void)customization;
- (void)fetchData;
- (void)showProfile;
- (void)showContacts;
- (void)showEmailAlert;
- (void)pushToUserMesssagesWithNotification:(NSNotification * _Nonnull)notification;
- (void)playSound;
- (void)prepareForSegue:(UIStoryboardSegue * _Nonnull)segue sender:(id _Nullable)sender;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillAppear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9QuickChat9LandingVC")
@interface LandingVC : UIViewController
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITapGestureRecognizer;
@class UICollectionView;
@class UICollectionViewLayout;
@class UIScrollView;
@protocol UIViewControllerTransitionCoordinator;
@class MKMapView;
@class UIImageView;

SWIFT_CLASS("_TtC9QuickChat5NavVC")
@interface NavVC : UINavigationController <UICollectionViewDelegate, UIScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified contactsView;
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified profileView;
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified previewView;
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified mapPreviewView;
@property (nonatomic, weak) IBOutlet MKMapView * _Null_unspecified mapVIew;
@property (nonatomic, weak) IBOutlet UIScrollView * _Null_unspecified scrollView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified previewImageView;
@property (nonatomic, weak) IBOutlet UICollectionView * _Null_unspecified collectionView;
@property (nonatomic, weak) IBOutlet RoundedImageView * _Null_unspecified profilePicView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified nameLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified emailLabel;
@property (nonatomic, strong) NSLayoutConstraint * _Null_unspecified topAnchorContraint;
@property (nonatomic, readonly, strong) UIView * _Nonnull darkView;
@property (nonatomic, copy) NSArray<User *> * _Nonnull items;
- (void)customization;
- (void)dismissExtraViews;
- (void)showExtraViewsWithNotification:(NSNotification * _Nonnull)notification;
- (CGRect)zoomRectForScaleWithScale:(CGFloat)scale center:(CGPoint)center;
- (void)fetchUsers;
- (void)fetchUserInfo;
- (IBAction)doubleTapGesture:(UITapGestureRecognizer * _Nonnull)sender;
- (IBAction)closeView:(id _Nonnull)sender;
- (IBAction)logOutUser:(id _Nonnull)sender;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView didSelectItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumLineSpacingForSectionAtIndex:(NSInteger)section;
- (CGFloat)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout minimumInteritemSpacingForSectionAtIndex:(NSInteger)section;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (UIView * _Nullable)viewForZoomingInScrollView:(UIScrollView * _Nonnull)scrollView;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (nonnull instancetype)initWithNavigationBarClass:(Class _Nullable)navigationBarClass toolbarClass:(Class _Nullable)toolbarClass OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRootViewController:(UIViewController * _Nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITextView;

SWIFT_CLASS("_TtC9QuickChat12ReceiverCell")
@interface ReceiverCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified message;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified messageBackground;
- (void)clearCellData;
- (void)awakeFromNib;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9QuickChat13RoundedButton")
@interface RoundedButton : UIButton
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;

SWIFT_CLASS("_TtC9QuickChat16RoundedImageView")
@interface RoundedImageView : UIImageView
- (void)layoutSubviews;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image highlightedImage:(UIImage * _Nullable)highlightedImage OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9QuickChat10SenderCell")
@interface SenderCell : UITableViewCell
@property (nonatomic, weak) IBOutlet RoundedImageView * _Null_unspecified profilePic;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified message;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified messageBackground;
- (void)clearCellData;
- (void)awakeFromNib;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@interface UIColor (SWIFT_EXTENSION(QuickChat))
+ (UIColor * _Nonnull)rbgWithR:(CGFloat)r g:(CGFloat)g b:(CGFloat)b;
@end


SWIFT_CLASS("_TtC9QuickChat4User")
@interface User : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly, copy) NSString * _Nonnull email;
@property (nonatomic, readonly, copy) NSString * _Nonnull id;
@property (nonatomic, strong) UIImage * _Nonnull profilePic;
+ (void)registerUserWithName:(NSString * _Nonnull)withName email:(NSString * _Nonnull)email password:(NSString * _Nonnull)password profilePic:(UIImage * _Nonnull)profilePic completion:(void (^ _Nonnull)(BOOL))completion;
+ (void)loginUserWithEmail:(NSString * _Nonnull)withEmail password:(NSString * _Nonnull)password completion:(void (^ _Nonnull)(BOOL))completion;
+ (void)logOutUserWithCompletion:(void (^ _Nonnull)(BOOL))completion;
+ (void)infoForUserID:(NSString * _Nonnull)forUserID completion:(void (^ _Nonnull)(User * _Nonnull))completion;
+ (void)downloadAllUsersWithExceptID:(NSString * _Nonnull)exceptID completion:(void (^ _Nonnull)(User * _Nonnull))completion;
+ (void)checkUserVerificationWithCompletion:(void (^ _Nonnull)(BOOL))completion;
- (nonnull instancetype)initWithName:(NSString * _Nonnull)name email:(NSString * _Nonnull)email id:(NSString * _Nonnull)id profilePic:(UIImage * _Nonnull)profilePic OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end

@class UIActivityIndicatorView;

SWIFT_CLASS("_TtC9QuickChat9WelcomeVC")
@interface WelcomeVC : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified darkView;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified spinner;
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified registerView;
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified loginView;
@property (nonatomic, weak) IBOutlet RoundedImageView * _Null_unspecified profilePicView;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified registerNameField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified registerEmailField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified registerPasswordField;
@property (nonatomic, copy) IBOutletCollection(UILabel) NSArray<UILabel *> * _Null_unspecified waringLabels;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified loginEmailField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified loginPasswordField;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified cloudsView;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified cloudsViewLeading;
@property (nonatomic, copy) IBOutletCollection(UITextField) NSArray<UITextField *> * _Null_unspecified inputFields;
@property (nonatomic, strong) NSLayoutConstraint * _Null_unspecified loginViewTopConstraint;
@property (nonatomic, strong) NSLayoutConstraint * _Null_unspecified registerTopConstraint;
@property (nonatomic, readonly, strong) UIImagePickerController * _Nonnull imagePicker;
@property (nonatomic) BOOL isLoginViewVisible;
@property (nonatomic, readonly) UIInterfaceOrientationMask supportedInterfaceOrientations;
- (void)customization;
- (void)cloundsAnimation;
- (void)showLoadingWithState:(BOOL)state;
- (void)pushTomainView;
- (IBAction)switchViews:(UIButton * _Nonnull)sender;
- (IBAction)register:(id _Nonnull)sender;
- (IBAction)login:(id _Nonnull)sender;
- (IBAction)selectPic:(id _Nonnull)sender;
- (void)textFieldDidBeginEditing:(UITextField * _Nonnull)textField;
- (BOOL)textFieldShouldReturn:(UITextField * _Nonnull)textField;
- (void)imagePickerController:(UIImagePickerController * _Nonnull)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *, id> * _Nonnull)info;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
