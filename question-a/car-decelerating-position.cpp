#include <vector>

namespace QuestionA
{
  /**
   * Given a sequence of positions of a car that is accelerating at first and then starts decelerating, finds the
   * position at which the car started decelerating.
   *
   * \param car_position_data Contains a sequence of numbers (at least two) that represents position of the car sampled
   * at consequitive time intervals. The car is accelerating at the first position and decelerating at the last
   * position. (Speed of the car will always be positive)
   *
   * \return A floating point which represents the first position in the input at which the car starts decelerating.
   */
  __declspec(dllexport) float find_the_car_decelerating_position(const std::vector<float>& car_position_data)
  {
    return car_position_data.back();
  }
}
